function hitung() {
    let V = document.getElementById("volt").value;
    let I = document.getElementById("arus").value;
    let R = document.getElementById("resistansi").value;
    let hasil = "";

    if (V && I && !R) {
        R = V / I;
        hasil = "Hambatan (R) = " + R + " Ohm";
    } 
    else if (V && R && !I) {
        I = V / R;
        hasil = "Arus (I) = " + I + " Ampere";
    } 
    else if (I && R && !V) {
        V = I * R;
        hasil = "Tegangan (V) = " + V + " Volt";
    } 
    else {
        hasil = "Masukkan 2 nilai saja!";
    }

    document.getElementById("hasil").innerText = hasil;
}