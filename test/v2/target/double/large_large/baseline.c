int __CPROVER_assert(int a, char *b) {}
int __QICC_assert(int a, char *b) {}
int __CPROVER_assume(int a ){}

int main(){
    int n;
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            int x = 0;
            __CPROVER_assert(x == 0, "postcondition");


        }
      
    }
}
