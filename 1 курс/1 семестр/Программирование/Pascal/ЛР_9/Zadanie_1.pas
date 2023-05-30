program l9;
var n, a, b, c, d:integer;
begin
writeln('Введите число');
readln(n);
a:=n div 10000;
b:=n mod 10;
if a=b then
begin
c:=n div 1000 mod 10;
d:=n div 10 mod 10;
if c = d then
begin
writeln('Число ', n, ' является палиндромом');
end
else writeln('Число ', n,' не является палиндромом');
end
else writeln('Число ', n,' не является палиндромом ');
readln();
end.