#include "libft.h"

static int	ft_char_in_set(char c, char const *set) {
    while (*set) {
        if (c == *set++)
            return 1;
    }
    return 0;
}

char	*ft_strtrim(char const *s1, char const *set) {
    if (s1 == NULL || set == NULL) {
        return NULL;
    }

    size_t start = 0;
    size_t end = ft_strlen(s1);

    while (s1[start] && ft_char_in_set(s1[start], set)) {
        start++;
    }

    while (end > start && ft_char_in_set(s1[end - 1], set)) {
        end--;
    }

    size_t trimmed_length = end - start;

    char *trimmed_str = (char *)malloc(sizeof(char) * (trimmed_length + 1));

    if (trimmed_str == NULL) {
        return NULL; // Memory allocation failed
    }

    ft_strlcpy(trimmed_str, s1 + start, trimmed_length + 1);

    return trimmed_str;
}

