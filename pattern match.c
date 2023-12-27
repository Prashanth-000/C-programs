#include <stdio.h>
#include <string.h>

char str[100], pat[50], rep[50], ans[100];
int m, i, j, k, c, flag = 0;

void stringmatch();

int main()
{
    printf("Enter main string\n");
    gets(str);
    printf("Enter pattern string\n");
    gets(pat);
    printf("Enter replacement string\n");
    gets(rep);

    // Removing newline characters if present in inputs
    str[strcspn(str, "\n")] = '\0';
    pat[strcspn(pat, "\n")] = '\0';
    rep[strcspn(rep, "\n")] = '\0';

    stringmatch();

    if (flag == 1)
    {
        printf("Resultant string is: %s\n", ans);
    }
    else
    {
        printf("Pattern matching does not exist\n");
    }

    return 0;
}

void stringmatch()
{
    int len = strlen(str);
    int patLen = strlen(pat);
    i = j = m = c = 0;
    ans[0] = '\0'; // Initialize ans to an empty string
    while (m < len)
    {
        if (str[m] == pat[i])
        {
            m++;
            i++;

            if (i == patLen)
            { // If the entire pattern is matched
                flag = 1;

                // Copy the replacement string to ans
                for (k = 0; rep[k] != '\0'; k++, j++)
                {
                    ans[j] = rep[k];
                }

                i = 0; // Reset pattern index
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    ans[j] = '\0'; // Terminate the resulting string properly
}