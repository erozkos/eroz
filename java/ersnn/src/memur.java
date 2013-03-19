
public class memur extends hoca {
	int M_SicilNo;
	String Birim;
	public void Memur_Tanýmla(int M_SicilNo, String Birim){
		this.M_SicilNo = M_SicilNo;
		this.Birim = Birim;
	}
	public static void Evrak_getirir(String string){
		System.out.println("Memur evrak getirir...");
	}
	public static void Evrak_goturur(String string){
		System.out.println("Memur evrak götürür...");
	}
}
