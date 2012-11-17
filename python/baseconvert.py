#string ifadeyi çagýrýrken týrnak içinde giriniz
def tabancevir(string,taban):
    uz1=i=len(string)
    sonuc=0
    while i >0 :
        sonuc = sonuc + (int(string[uz1-i])*(taban**(i-1)))
        i= i - 1              
    return sonuc
