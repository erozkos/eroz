
public class hoca extends ogrenci{
	int Sicil_No;
	String Bolum;
	public void Hoca_Tan�mla(int Sicil_No, String Bolum){
		this.Sicil_No = Sicil_No;
		this.Bolum = Bolum;
	}
	
	public static void ders_yap(String string){
		System.out.println("Hoca Derse girir");
	}
	
	public static void Sinav_yap(String string){
		System.out.println("Hoca S�nav yapar");
	}

}
