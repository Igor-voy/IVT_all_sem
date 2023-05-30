program l5;
var a1, b1, c1, a2, b2, c2, a3, b3, c3, a4, b4, c4, S, p:real;
function f(a, b, c:real):real;
begin
p:=(a+b+c)/2;
f:=sqrt(p*(p-a)*(p-b)*(p-c));
end;
begin
writeln('¬ведите стороны первого треугольника');
readln(a1);
readln(b1);
readln(c1);
writeln('¬ведите стороны второго треугольника');
readln(a2);
readln(b2);
readln(c2);
writeln('¬ведите стороны третьего треугольника');
readln(a3);
readln(b3);
readln(c3);
writeln('¬ведите стороны четвертого треугольника');
readln(a4);
readln(b4);
readln(c4);
S:=f(a1, b1, c1)+f(a2, b2, c2)+f(a3, b3, c3)+f(a4, b4, c4);
writeln('ѕлощадь = ', S);
readln();
end.