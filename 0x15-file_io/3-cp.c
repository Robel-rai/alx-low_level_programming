#define BUFSIZE 1024

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
    int from_fd, to_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFSIZE];
    char *from_file = argv[1];
    char *to_file = argv[2];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    from_fd = open(from_file, O_RDONLY);
    if (from_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
        exit(98);
    }

    to_fd = open(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (to_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
        close(from_fd);
        exit(99);
    }

    while ((bytes_read = read(from_fd, buffer, BUFSIZE)) > 0)
    {
        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
            close(from_fd);
            close(to_fd);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
        close(from_fd);
        close(to_fd);
        exit(98);
    }

    if (close(from_fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
        close(to_fd);
        exit(100);
    }

    if (close(to_fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
        exit(100);
    }

    return (0);
}
