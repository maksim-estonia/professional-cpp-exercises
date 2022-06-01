void fillWithM(char * text)
{
    int i { 0 };
    while (text[i] != '\0') {
        text[i] = 'm';
        i++;
    }
}