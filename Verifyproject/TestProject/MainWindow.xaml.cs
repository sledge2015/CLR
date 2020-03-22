using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Runtime.InteropServices;

namespace TestProject
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    /// 
    public partial class MainWindow : Window
    {
        [DllImport("Verifyproject.dll")]
        public static extern int GetArrayElementNumber();

        //[DllImport("Verifyproject.dll")]
        //public static  System.String GetArrayElementString();
        public MainWindow()
        {
           // InitializeComponent();
        int n = GetArrayElementNumber();
        System.String str = ORDTools.PreViewControl.GetArrayElementString();

    }
}
}
