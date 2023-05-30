program l3;
var a, b, s1, s2, h, n, m, x, I, r: real;
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
m:=x*x;
r:=sqrt(0.8*m+1)/(x+sqrt(1.5*m+2));
s1:=s1+r;
x:=x+2*h;
end;
x:=a+2*h;
while x <= b-2*h do
begin
m:=x*x;
r:=sqrt(0.8*m+1)/(x+sqrt(1.5*m+2));
s2:=s2+r;
x:=x+2*h;
end;
I:=(h/3)*((sqrt(0.8*a*a+1)/(a+sqrt(1.5*a*a+2))+sqrt(0.8*b*b+1)/(b+sqrt(1.5*b*b+2)))+4*s1+2*s2);
writeln ('Результат вычисления = ', I:3:5);
end.