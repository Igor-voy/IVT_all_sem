program l4;
var a, b, s1, s2, h, n, m, x, I: real;
function f(x:real):real;
begin
m:=x*x;
f:=sqrt(0.8*m+1)/(x+sqrt(1.5*m+2));
end;
begin
writeln ('Введите количество разбиений');
readln(n);
a:=0.8;
b:=1.8;
h:=(b-a)/n;
x:=a+h;
s1:=0;
s2:=0;
while x <= b-h do
begin
s1:=s1+f(x);
x:=x+2*h;
end;
x:=a+2*h;
while x <= b-2*h do
begin
s2:=s2+f(x);
x:=x+2*h;
end;
I:=(h/3)*(f(a)+f(b)+4*s1+2*s2);
writeln ('Результат вычисления = ', I:3:5);
end.     