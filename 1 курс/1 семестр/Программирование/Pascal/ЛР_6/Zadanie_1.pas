program l6;
var
R, C, L,Xc,Xl,fi,Z:real;
f:array[1..10] of real;
i:integer;
begin
R:=4;
C:=power(10, -12);
L:=0.02;
for i:=1 to 10 do begin
f[i]:=i;
Xc:=1/(2*Pi*f[i]*C);
Xl:=2*Pi*f[i]*L;
fi:=arctan(XL/R-Xl*Xl/(R*Xc)-R/Xc);
Z:=Xc*sqrt((XL*XL+R*R)/(R*R+(Xl-XC)*(Xl-XC)));
writeln('”гол = ', fi:1:5,' Z = ', z:1:5);
end;
readln();
end. 