using System;

namespace Program
{
    using System;

    public class Kutu
    {
        public int Uzunluk { get; set; }
        public int Genislik { get; set; }

        public Kutu(int uzunluk, int genislik)
        {
            Uzunluk = uzunluk;
            Genislik = genislik;
        }

        // operator overloading

        public static Kutu operator +(Kutu a,Kutu b)
        {
            return new Kutu(a.Uzunluk + b.Uzunluk, a.Genislik + b.Genislik);
        }

        public static Kutu operator -(Kutu a, Kutu b)
        {
            return new Kutu(a.Uzunluk - b.Uzunluk, a.Genislik - b.Genislik);
        }

        public static bool operator ==(Kutu a, Kutu b)
        {
            return a.Uzunluk == b.Uzunluk && a.Genislik == b.Genislik;
        }

        public static bool operator !=(Kutu a, Kutu b)
        {
            return a.Uzunluk != b.Uzunluk && a.Genislik != b.Genislik;
        }






    }


    class Program
    {
        static void Main(string[] args)
        {
            var kutu1 = new Kutu(100, 20);
            var kutu2 = new Kutu(100, 20);

            // var kutu3 = kutu1 + kutu2;
            var kutu3 = kutu1 - kutu2;

            Console.WriteLine("Uzunluk : " + kutu3.Uzunluk + "Genislik: " + kutu3.Genislik);

            var EsitMi = kutu1 == kutu2;

            Console.WriteLine(EsitMi);

            Console.ReadLine();

        }
    }
}
