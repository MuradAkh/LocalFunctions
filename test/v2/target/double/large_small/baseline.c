int __CPROVER_assert(int a, char *b) {}
int __CPROVER_assume(int a ){}
int __QICC_assert(int a, char *b) {}


int main(){
    int n;
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int x = 0;
            __CPROVER_assert(x == 0, "postcondition");
        }
      
    }
}