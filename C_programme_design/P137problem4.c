#include <stdio.h>

int main()
{
  //item来记录实时输入的字符，便于处理
  char item;
  //alpha，space，num，other分别记录四种字符的数量
  int alpha = 0, space = 0, num = 0, other = 0;
  //以换行符为结束输入的标志来输入数据
  while(scanf("%c", &item))
  {
    //边输入边处理
    if(item != '\n')
    {
      if(item >= 'A' && item <= 'Z' || item >='a' && item <= 'z') {alpha++; continue;}
      if(item == ' ') {space++; continue;}
      if(item >= '1' && item <= '9') {num++; continue;}
      other++;
      continue;
    }
    break;
  }
  printf("英文字母的个数为：%d 空格的个数为：%d 数字的个数为：%d 其他字符的个数为：%d", alpha, space, num, other);
  return 0;
}