#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
int board[20],count;

int main()
{
int n,i,j;
void queen(int row,int n);
printf(&quot;N-Queens Problem Using Backtracking&quot;);
printf(&quot;\n\nEnter no. of Queens:&quot;);
scanf(&quot;%d&quot;,&amp;n);
queen(1,n);
printf(&quot;\n\nTotal solutions:%d&quot;,count);
return 0;
}
void print(int n)
{
int i,j;
printf(&quot;\n\nSolution %d:\n\n&quot;,++count);
for(i=1;i&lt;=n;++i)
printf(&quot;\t%d&quot;,i);
for(i=1;i&lt;=n;++i)
{
printf(&quot;\n\n%d&quot;,i);
for(j=1;j&lt;=n;++j)
{
if(board[i]==j)
printf(&quot;\tQ&quot;);
else
printf(&quot;\t*&quot;);
}
}
}
int place(int row,int column)
{
int i;
for(i=1;i&lt;=row-1;++i)
{
if((board[i]==column)||((abs(board[i]-column)==abs(i-row))))
return 0;
}
return 1;
}
void queen(int row,int n)

{
int column;
for(column=1;column&lt;=n;++column)
{
if(place(row,column))
{
board[row]=column;
if(row==n)
print(n);
else
queen(row+1,n);
}
}
}
