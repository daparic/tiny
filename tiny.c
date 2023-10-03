int addnum(int a, int b) {
    return a + b;
}    

int main(int argc, char *argv[]) {
    int count = 0;
    if (argc > 1) {
        char *ch = argv[argc - 1];
        while (*ch != '\0') {
            if ((*ch >= 'A' && *ch <= 'Z') || (*ch >= 'a' && *ch <= 'z') ||
                (*ch >= '0' && *ch <= '9'))
                count++;
            ch++;
        }
    }
    return count;
}
