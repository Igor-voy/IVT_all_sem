program l9;
var n, a, b, c, d:integer;
begin
writeln('������� �����');
readln(n);
a:=n div 10000;
b:=n mod 10;
if a=b then
begin
c:=n div 1000 mod 10;
d:=n div 10 mod 10;
if c = d then
begin
writeln('����� ', n, ' �������� �����������');
end
else writeln('����� ', n,' �� �������� �����������');
end
else writeln('����� ', n,' �� �������� ����������� ');
readln();
end.