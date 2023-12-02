#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(void)
{
   time_t timer;
   struct tm *t_st;
   char *wday[] = {"日","月","火","水","木","金","土"};

   /* 現在時刻の取得 */
   time(&timer);

   /* 現在時刻を構造体に変換 */
   t_st = localtime(&timer);
   printf("年  : %d\n",t_st->tm_year+1900);
   printf("月  : %d\n",t_st->tm_mon+1);
   printf("日  : %d\n",t_st->tm_mday);
   printf("曜日: %s\n",wday[t_st->tm_wday]);
   printf("時  : %d\n",t_st->tm_hour);
   printf("分  : %d\n",t_st->tm_min);
   printf("秒  : %d\n",t_st->tm_sec);

   return 0;
}
