#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
  size_t i;
  size_t s_len;
  size_t sub_len;

  i = 0;
    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup("")); // Return an empty string if start is out of bounds
    size_t sub_len = (s_len - start < len) ? s_len - start : len;
    char *substr = (char *)malloc((sub_len + 1) * sizeof(char)); // +1 for the null terminator
    if (!substr)
        return (NULL); // Memory allocation failed
    while (i < sub_len) {
        substr[i] = s[start + i];
        i++;
    }
    substr[sub_len] = '\0'; // Null-terminate the substring
    return (substr);
}
