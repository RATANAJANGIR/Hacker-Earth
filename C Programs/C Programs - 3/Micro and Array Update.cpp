#include <cstdio>

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

void solve()
{
    int no_of_elements, k;
    scanf("%d %d", &no_of_elements, &k);
    
    const int oo = 1e9;
    int minimum = oo;
    
    while(no_of_elements--)
    {
        int element;
        scanf("%d", &element);
        
        minimum = min(minimum, element);
    }
    
    int answer = max(0, k - minimum);
    printf("%d\n", answer);
}

int main()
{
    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);
    
    while(no_of_test_cases--)
        solve();
        
    return 0;
}
