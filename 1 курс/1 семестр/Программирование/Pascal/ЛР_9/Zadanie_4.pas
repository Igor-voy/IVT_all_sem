program l9;
var n:integer;
begin
writeln('������� �����');
readln(n);
case n mod 10 of
1:case n mod 100 of
11:writeln(n, ' - �����');
else writeln(n,' - ������');
end;
2,3,4:case n mod 100 of
12,13,14: writeln(n, ' - �����');
else writeln(n,' - ������');
end;
0,5,6,7,8,9: writeln(n, ' - �����');
end;
readln();
end.