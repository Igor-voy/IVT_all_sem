program l3;
var a,b,s,h,n,m,x,I, r: real;
begin
writeln ('������� ���������� ���������:');
readln (n);
a:=0.8;
b:=1.8;
h:=(b-a)/n;
s:=0;
x:=a+h;
while x <= b do
begin
m:=x*x;
r:=(sqrt(0.8*m+1)/(x+sqrt(1.5*m+2)));
s:=s+r;
x:=x+h;
end;
I:=h*s;
writeln ('��������� ���������� = ', I:3:5);
end.