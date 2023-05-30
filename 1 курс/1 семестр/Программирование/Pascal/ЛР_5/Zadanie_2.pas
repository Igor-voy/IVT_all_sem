program l5;
var y:real;
function f1(a:real):real;
begin
f1:=a+sin(a);
end;
function f2(b:real):real;
begin
f2:=sin(b)+b;
end;
begin
y:=(f1(2)/f2(5))+(f1(6)/f2(3))+(f1(1)/f2(4));
writeln('Результат вычисления = ', y:5:6);
readln();
end.