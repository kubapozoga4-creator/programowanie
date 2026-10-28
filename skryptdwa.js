var x = 10;
var y = 17;
var z = 33;

if (y > x && y < z) {
    document.write("Zmienna y jest większa od zmiennej x, ale jest mniejsza od zmiennej z<br>");
} else if (x < y && x < z) {
    document.write("Zmienna x jest mniejsza od zmiennej y i jest mniejsza od zmiennej z<br>");
} else if (z > y && z > x) {
    document.write("Zmienna z jest większa od zmiennej y i jest większa od zmiennej x<br>");
}