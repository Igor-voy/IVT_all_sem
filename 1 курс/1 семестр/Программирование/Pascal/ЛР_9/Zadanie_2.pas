program l9;
var h,D,fi,sA,cA,A:real;
begin
h:= 0.1;
D:= 30*3.14/180;
fi:= 45*3.14/180;
sA:=cos(fi)*sin(h)/sin(D);
cA:=(sin(fi)-sin(fi)*cos(D))/(cos(fi)*sin(D));
A:=arcsin(cos(fi)*sin(h)/sin(D));
if sA<0 then
if cA<0 then
A:=3.14+abs(A)
else A:=2*3.14-abs(A)
else if cA<0 then
A:=3.14-abs(A)
else A:=abs(A);
A:=A*180/3.14;
write ('A = ', A:2:4);
if (A>0) and (A<90) then writeln(' - 1 четверть');
if (A>90) and (A<180) then writeln(' - 2 четверть');
if (A>180) and (A<260) then writeln('- 3 четверть');
if (A>260) and (A<380) then writeln('- 4 четверть');
readln();
end.