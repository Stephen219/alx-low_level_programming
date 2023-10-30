/**
 * print_entry - logs the entry point of the header
 * @e_entry: pointer of the entry
 * @e_id: A pointer to an a
 */
void print_entry(unsigned long int e_entry, unsigned char *e_id)
{
        printf(" Entry point address:               ");

        if (e_i[EI_DATA] == ELFDATA2MSB)
        {
                e_entry = ((e_entry << 8) & 0xFF00FF00) |
                          ((e_entry >> 8) & 0xFF00FF);
                e_entry = (e_entry << 16) | (e_entry >> 16);
        }

        if (e_id[EI_CLASS] == ELFCLASS32)
                printf("%#x\n", (unsigned int)e_entry);

        else
                printf("%#lx\n", e_entry);
}

