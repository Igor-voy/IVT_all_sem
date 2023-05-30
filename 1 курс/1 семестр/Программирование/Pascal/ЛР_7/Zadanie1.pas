program l7;
var a, sum: integer;
begin
writeln('Введите трехзначное число');
readln(a);
sum:=(a div 100)+(a mod 10)+(a div 10 mod 10);
while sum>10 do
begin
writeln('Введите трехзначное число');
readln(a);
sum:=(a div 100)+(a mod 10)+(a div 10 mod 10);
end;
readln();
end.