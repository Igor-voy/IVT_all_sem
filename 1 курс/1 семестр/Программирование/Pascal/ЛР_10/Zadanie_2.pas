program l10;
var  mas:array [1..10]of integer;
i,n,s:integer;
begin
writeln('������');
randomize;
for i:=1 to 10 do
begin
mas[i]:=random(100);
write(mas[i], ' ');
end;
writeln();
writeln('������� �����');
readln(n);
s:=0;
for i:=1 to 10 do
begin
if mas[i]>n then
s:=s+mas[i];
end;
writeln ('����� ����� ', s) ;
readln();
end.