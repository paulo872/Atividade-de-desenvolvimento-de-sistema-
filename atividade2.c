#include &lt;stdio.h&gt;
int main() {

int a = 1;
while(a != 0){
printf(&quot;Insira um numero: \n&quot;);
scanf(&quot;%d&quot;, &amp;a);
if(a % 2 == 0){
printf(&quot;%d eh par!\n&quot;, a);
}else{
printf(&quot;%d eh impar!\n&quot;,a);
}
}
}
