program l10;
var  mas:array [1..10]of integer;
i,n,s:integer;
begin
writeln('Массив');
randomize;
for i:=1 to 10 do
begin
mas[i]:=random(100);
write(mas[i], ' ');
end;
writeln();
writeln('Введите число');
readln(n);
s:=0;
for i:=1 to 10 do
begin
if mas[i]>n then
s:=s+mas[i];
end;
writeln ('Сумма равна ', s) ;
readln();
end.