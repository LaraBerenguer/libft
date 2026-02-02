/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:21:42 by larberen          #+#    #+#             */
/*   Updated: 2026/02/02 18:36:50 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
** ---------------------------
** Helper Functions for testing
** ---------------------------
*/

// Helper for ft_strmapi
char	ft_capitalize(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// Helper for ft_striteri
void	ft_change(unsigned int i, char *c)
{
	(void)i;
	if (*c == ' ')
		*c = '_';
}

// Helper for ft_lstclear/ft_lstdelone
void	del_content(void *content)
{
	free(content);
}

// Helper to print list content
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

// Helper for ft_lstmap
void	*ft_dup(void *content)
{
	return (strdup((char *)content));
}

// Helper for ft_lstiter
void	ft_cat(void *n)
{
	ft_strlcat((char *)n, " holi", 64);
}


/*
** ---------------------------
** Test Functions
** ---------------------------
*/

void test_part1(void)
{
	printf("\n--- Part 1: Libc Functions ---\n\n");

	// isalpha, isdigit, isalnum, isascii, isprint
	printf("===== is* =====\n");
	printf("ft_isalpha('a'): %d, isalpha('a'): %d\n", ft_isalpha('a'), isalpha('a'));
	printf("ft_isalpha('1'): %d, isalpha('1'): %d\n", ft_isalpha('1'), isalpha('1'));
	printf("ft_isdigit('5'): %d, isdigit('5'): %d\n", ft_isdigit('5'), isdigit('5'));
	printf("ft_isdigit('a'): %d, isdigit('a'): %d\n", ft_isdigit('a'), isdigit('a'));
	printf("ft_isalnum('z'): %d, isalnum('z'): %d\n", ft_isalnum('z'), isalnum('z'));
	printf("ft_isalnum(' '): %d, isalnum(' '): %d\n", ft_isalnum(' '), isalnum(' '));
	printf("ft_isascii(127): %d, isascii(127): %d\n", ft_isascii(127), isascii(127));
	printf("ft_isascii(128): %d, isascii(128): %d\n", ft_isascii(128), isascii(128));
	printf("ft_isprint(32): %d, isprint(32): %d\n", ft_isprint(32), isprint(32));
	printf("ft_isprint(31): %d, isprint(31): %d\n\n", ft_isprint(31), isprint(31));

	// strlen
	printf("===== ft_strlen =====\n");
	printf("ft_strlen(\"hello\"): %zu, strlen(\"hello\"): %zu\n\n", ft_strlen("hello"), strlen("hello"));

	// memset
	printf("===== ft_memset =====\n");
	char memset_str[10] = "abcdefghi";
	ft_memset(memset_str, 'X', 5);
	printf("Result: %s\n\n", memset_str);

	// bzero
	printf("===== ft_bzero =====\n");
	char bzero_str[10] = "abcdefghi";
	ft_bzero(bzero_str, 5);
	printf("Result (first 5 bytes are null): ");
	for(int i=0; i<10; i++) printf("%c", bzero_str[i] ? bzero_str[i] : '.');
	printf("\n\n");

	// memcpy
	printf("===== ft_memcpy =====\n");
	char memcpy_src[] = "source";
	char memcpy_dst[10];
	ft_memcpy(memcpy_dst, memcpy_src, 7);
	printf("Result: %s\n\n", memcpy_dst);

	// memmove
	printf("===== ft_memmove =====\n");
	char memmove_str[] = "123456789";
	ft_memmove(memmove_str + 2, memmove_str, 5);
	printf("Result (overlap): %s\n\n", memmove_str);

	// strlcpy
	printf("===== ft_strlcpy =====\n");
	char strlcpy_dst[10];
	size_t cpy_res = ft_strlcpy(strlcpy_dst, "hello world", 10);
	printf("Copied: '%s', Length of src: %zu\n\n", strlcpy_dst, cpy_res);

	// strlcat
	printf("===== ft_strlcat =====\n");
	char strlcat_dst[20] = "hello ";
	size_t cat_res = ft_strlcat(strlcat_dst, "world", 12);
	printf("Concatenated: '%s', Total length: %zu\n\n", strlcat_dst, cat_res);

	// toupper / tolower
	printf("===== toupper/tolower =====\n");
	printf("ft_toupper('a'): %c, toupper('a'): %c\n", ft_toupper('a'), toupper('a'));
	printf("ft_tolower('Z'): %c, tolower('Z'): %c\n\n", ft_tolower('Z'), tolower('Z'));

	// strchr / strrchr
	printf("===== strchr/strrchr =====\n");
	char *strchr_s = "find the needle in the haystack";
	printf("String: \"%s\"\n", strchr_s);
	printf("ft_strchr 'n': %s\n", ft_strchr(strchr_s, 'n'));
	printf("ft_strrchr 'n': %s\n\n", ft_strrchr(strchr_s, 'n'));

	// strncmp
	printf("===== ft_strncmp =====\n");
	printf("Comparing \"abc\" and \"abd\" (3 chars): %d\n", ft_strncmp("abc", "abd", 3));
	printf("Comparing \"abc\" and \"abc\" (5 chars): %d\n\n", ft_strncmp("abc", "abc", 5));

	// memchr
	printf("===== ft_memchr =====\n");
	char *memchr_s = "another test";
	printf("Found 't' at: %s\n\n", (char *)ft_memchr(memchr_s, 't', 12));

	// memcmp
	printf("===== ft_memcmp =====\n");
	printf("Comparing \"abc\" and \"abd\" (3 bytes): %d\n\n", ft_memcmp("abc", "abd", 3));

	// strnstr
	printf("===== ft_strnstr =====\n");
	printf("Finding \"world\" in \"hello world\" (11 chars): %s\n", ft_strnstr("hello world", "world", 11));
	printf("Finding \"world\" in \"hello world\" (5 chars): %s\n\n", ft_strnstr("hello world", "world", 5));

	// atoi
	printf("===== ft_atoi =====\n");
	char *atoi_tests[] = {"42", "   -42", "+42", "42-", "--42", "42a5", NULL};
	for (int i = 0; atoi_tests[i]; i++)
		printf("String: \"%s\" -> ft_atoi: %d, atoi: %d\n", atoi_tests[i], ft_atoi(atoi_tests[i]), atoi(atoi_tests[i]));
	printf("\n");

	// calloc
	printf("===== ft_calloc =====\n");
	int *arr = ft_calloc(5, sizeof(int));
	if (arr)
	{
		printf("ft_calloc allocated 5 ints: ");
		for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
		printf("\n");
		free(arr);
	}
	printf("\n");

	// strdup
	printf("===== ft_strdup =====\n");
	char *dup_src = "duplicate me";
	char *dup_dst = ft_strdup(dup_src);
	if (dup_dst)
	{
		printf("Original: '%s', Duplicated: '%s'\n", dup_src, dup_dst);
		free(dup_dst);
	}
	printf("\n");
}

void test_part2(void)
{
	printf("\n--- Part 2: Additional Functions ---\n\n");

	// substr
	printf("===== ft_substr =====\n");
	char *sub_res = ft_substr("hello world", 6, 5);
	printf("Substring of \"hello world\" from index 6, len 5: '%s'\n\n", sub_res);
	free(sub_res);

	// strjoin
	printf("===== ft_strjoin =====\n");
	char *join_res = ft_strjoin("hello, ", "world!");
	printf("Joining \"hello, \" and \"world!\": '%s'\n\n", join_res);
	free(join_res);

	// strtrim
	printf("===== ft_strtrim =====\n");
	char *trim_res = ft_strtrim("...hello...", ".");
	printf("Trimming '.' from \"...hello...\": '%s'\n\n", trim_res);
	free(trim_res);

	// split
	printf("===== ft_split =====\n");
	char **split_res = ft_split("one two three", ' ');
	if (split_res)
	{
		printf("Splitting \"one two three\" by ' ':\n");
		for (int i = 0; split_res[i]; i++)
		{
			printf("  [%d] %s\n", i, split_res[i]);
			free(split_res[i]);
		}
		free(split_res);
	}
	printf("\n");

	// itoa
	printf("===== ft_itoa =====\n");
	int itoa_tests[] = {0, 42, -42, 2147483647, -2147483648};
	for (int i = 0; i < 5; i++)
	{
		char *res = ft_itoa(itoa_tests[i]);
		printf("%d -> %s\n", itoa_tests[i], res);
		free(res);
	}
	printf("\n");

	// strmapi
	printf("===== ft_strmapi =====\n");
	char *map_res = ft_strmapi("hello", ft_capitalize);
	printf("Mapping 'hello' with capitalize function: %s\n\n", map_res);
	free(map_res);

	// striteri
	printf("===== ft_striteri =====\n");
	char striteri_str[] = "change spaces";
	ft_striteri(striteri_str, ft_change);
	printf("Iterating on \"change spaces\" to replace ' ' with '_': %s\n\n", striteri_str);

	// putchar_fd, putstr_fd, putendl_fd, putnbr_fd
	printf("===== ft_put*_fd (output to stdout) =====\n");
	ft_putstr_fd("ft_putstr_fd: ", 1);
	ft_putchar_fd('O', 1);
	ft_putchar_fd('K', 1);
	ft_putchar_fd('\n', 1);
	ft_putendl_fd("ft_putendl_fd: OK", 1);
	ft_putstr_fd("ft_putnbr_fd: ", 1);
	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);
	printf("\n");
}

void test_bonus(void)
{
	printf("\n--- Linked List Functions ---\n\n");

	// lstnew
	printf("===== ft_lstnew =====\n");
	t_list *elem = ft_lstnew(strdup("A"));
	printf("New element content: %s\n\n", (char *)elem->content);

	// lstadd_front
	t_list *lst = NULL;
	ft_lstadd_front(&lst, elem);
	ft_lstadd_front(&lst, ft_lstnew(strdup("B")));
	printf("===== ft_lstadd_front =====\n");
	printf("List after adding to front: ");
	print_list(lst);
	printf("\n");

	// lstsize
	printf("===== ft_lstsize =====\n");
	printf("List size: %d\n\n", ft_lstsize(lst));

	// lstlast
	printf("===== ft_lstlast =====\n");
	printf("Last element content: %s\n\n", (char *)ft_lstlast(lst)->content);

	// lstadd_back
	ft_lstadd_back(&lst, ft_lstnew(strdup("C")));
	printf("===== ft_lstadd_back =====\n");
	printf("List after adding to back: ");
	print_list(lst);
	printf("\n");

	// lstiter
	printf("===== ft_lstiter =====\n");
	ft_lstiter(lst, ft_cat);
	printf("List after applying ft_cat: ");
	print_list(lst);
	printf("\n");

	// lstmap
	printf("===== ft_lstmap =====\n");
	t_list *mapped = ft_lstmap(lst, ft_dup, del_content);
	printf("New mapped list: ");
	print_list(mapped);
	printf("\n");

	// lstdelone
	printf("===== ft_lstdelone =====\n");
	if (mapped && mapped->next)
	{
		t_list *to_del = mapped->next; // Element "A holi"
		mapped->next = to_del->next;
		ft_lstdelone(to_del, del_content);
		printf("Mapped list after deleting one element: ");
		print_list(mapped);
	}
	printf("\n");

	// lstclear
	printf("===== ft_lstclear =====\n");
	ft_lstclear(&lst, del_content);
	ft_lstclear(&mapped, del_content);
	printf("Pointers after clear: lst=%p, mapped=%p\n", (void *)lst, (void *)mapped);
}

int	main(void)
{
	printf("##########################################\n");
	printf("#                                        #\n");
	printf("#        Hello! Let's test libft         #\n");
	printf("#                                        #\n");
	printf("##########################################\n");

	test_part1();
	test_part2();
	test_bonus();

	printf("\n--- All tests completed ---\n");

	return (0);
}
