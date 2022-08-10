       return (0);
}
/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */
int _printf(const char *format, ...)
{
        int sum = 0;
        va_list ap;
        char *p, *start;
        params_t params = PARAMS_INIT;

        va_start(ap, format);

        if (!format || (format[0] == '%' && !format[1]))
                return (-1);
        if (format[0] == '%' && format[1] == ' ' && !format[2])
                return (-1);
        for (p = (char *)format; *p; p++)
        {
                init_params(&params, ap);
                if (*p != '%')
                {
                        sum += _putchar(*p);
                        continue;
                }
                start = p;
                p++;
                while (get_flag(p, &params)) /* while char at p is flag char */
                {
                        p++; /* next char */
                }
                p = get_width(p, &
~

