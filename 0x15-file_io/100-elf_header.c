#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_info(Elf64_Ehdr *elf_header)
{
	int i;
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\nClass:   %d-bit\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data:    %s-endian\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "Little" : "Big");
	printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:  ");
	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n"); 
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
				    printf("NetBSD\n");
				    break;
		case ELFOSABI_LINUX:
				      printf("Linux\n");
				      break;
		/**case ELFOSABI_SOLARIS:
				     printf("Sun Solaris\n");
				     break;
		case ELFOSABI_AIX:
				       printf("IBM AIX\n");
				       break;
		case ELFOSABI_IRIX:
				   printf("SGI Irix\n");
				   break;
		case ELFOSABI_FREEBSD:
				    printf("FreeBSD\n");
				    break;
		case ELFOSABI_TRU64:
				       printf("Compaq TRU64 UNIX\n");
				       break;
		case ELFOSABI_MODESTO:
				     printf("Novell Modesto\n");
				     break;*/
		case ELFOSABI_OPENBSD:
				    printf("OpenBSD\n");
				    break;
		default:
				    printf("Unknown\n");
				    break;
	}
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:    ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core dump file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	ssize_t header_size;

	  const char *filename = argv[1];
	  if (argc != 2)
	  {
		  dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		  return (98);
	  }
	  fd =open(filename, O_RDONLY);
	  
	  if (fd == -1)
	  {
		  dprintf(2, "Error: Can't open file %s\n", filename);
		  return (98);
	  }
	  header_size = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	  if (header_size == -1)
	  {
		  dprintf(2, "Error: Can't read from file %s\n", filename);
		  close(fd);
		  return (98);
	  }
	  if (header_size != sizeof(Elf64_Ehdr) || elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			  elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			  elf_header.e_ident[EI_MAG3] != ELFMAG3)
	  {
		  dprintf(2, "Error: Not an ELF file: %s\n", filename);
		  close(fd);
		  return (98);
	  }
	  print_elf_info(&elf_header);
	  close(fd);
	  return (0);
}

