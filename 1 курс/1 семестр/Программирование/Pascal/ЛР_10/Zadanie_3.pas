program l10;
var mas:array[1..10] of integer;
mas1:array[1..10] of integer;
i, s:integer;
r:real;
begin
writeln('������');
randomize;
for i:=1 to 10 do
begin
mas[i]:=random(100);
s:=s+mas[i];
write(mas[i], ' ');
end;
writeln();
r:=s/10;
writeln('������� �������������� ����� ', r);
writeln('����� ������');
for i:=1 to 10 do
begin
if mas[i]<r then
mas1[i]:=0
else mas1[i]:=mas[i];
write(mas1[i],' ');
end;
readln();
end. 