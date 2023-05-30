program l3;
var a, b, s, h, n, m, x, I, r: real;
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
m:=x*x;
r:=(sqrt(0.8*m+1)/(x+sqrt(1.5*m+2)));
s:=s+r;
x:=x+h;
end;
I:=h*((sqrt(0.8*a*a+1)/(a+sqrt(1.5*a*a+2))+sqrt(0.8*b*b+1)/(b+sqrt(1.5*b*b+2)))/2 +s);
writeln ('Результат вычисления = ', I:3:5);
end.