int __CPROVER_assert(int a, char *b) {}
int __CPROVER_assume(int a ){}
int __QICC_assert(int a, char *b) {}


int main(){
    int x = 0;
    for (int i = 0; i < 100; i++)
    {
        __CPROVER_assert(x == 0, "postcondition");
    }
}