program l4;
var a, b, s, h, n, m, x, I: real;
function f(x:real):real;
begin
m:=x*x;
f:=sqrt(0.8*m+1)/(x+sqrt(1.5*m+2));
end;
begin
writeln ('Введите количество разбиений');
readln (n);
a:=0.8;
b:=1.8;
h:=(b-a)/n;
s:=0;
x:=a+h;
while x <= b-h do
begin
s:=s+f(x);
x:=x+h;
end;
I:=h*((f(a)+f(b))/2 +s);
writeln ('Результат вычисления = ', I:3:5);
end.    