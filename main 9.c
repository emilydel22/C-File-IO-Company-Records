fprintf(stderr, "Error opening output file.\n");
fclose(ip);
free(info);
return 1;
}

/* --- loop through 10 company records --- */
for (BlockNumber = 0; BlockNumber < 10; BlockNumber++)
{
    /* move file position to start of block #BlockNumber */
    fseek(ip,
          (long)BlockNumber * (long)sizeof(company),
          SEEK_SET);

    if (fseek(ip,
              (long)BlockNumber * (long)sizeof(company),
              SEEK_SET))
    {
        fprintf(stderr, "Error using fseek.\n");
        fclose(ip);
        fclose(op);
        free(info);
        return 1;
    }

    /* read ONE company record */
    if (fread(info, sizeof(company), 1, ip) != 1)
    {
        fprintf(stderr, "Error reading file.\n");
        fclose(ip);
        fclose(op);
        free(info);
        return 1;
    }

    /* header for this block in the output file */
    fprintf(op, "\n\nBlock %d\n", BlockNumber);

    /* print all fields to the output file */
    printInfo(info, op);
}

/* --- clean up --- */
fclose(ip);
fclose(op);
free(info);

return 0;
}

/* printInfo: prints all fields of a company to fp */
void printInfo(company *info, FILE *fp)
{
    fprintf(fp, "Name:    %s\n", info->name);
    fprintf(fp, "Street:  %s\n", info->street);
    fprintf(fp, "City:    %s\n", info->city);
    fprintf(fp, "State:   %s\n", info->state);
    fprintf(fp, "Zip:     %s\n", info->zip);
    fprintf(fp, "Phone:   %s\n", info->phone);
    fprintf(fp, "Cell:    %s\n", info->cell);
    fprintf(fp, "Rating:  %s\n", info->rating);
    fprintf(fp, "Contact: %s\n", info->contact);
}
