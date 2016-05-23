using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calc
{
    public partial class Caculator : Form
    {
        double resultValue = 0;
        string operationPerformed = "";
        bool operation_pressed = false;

        public Caculator()
        {
            InitializeComponent();
        }

        private void botton_click(object sender, EventArgs e)
        {
            Button button = (Button)sender;

            if ((textBox_Result.Text == "0") || (operation_pressed))
                if(button.Text !=",") textBox_Result.Clear();
      
            if (button.Text == ",")
            {
                if (!textBox_Result.Text.Contains(","))
                    textBox_Result.Text = textBox_Result.Text + button.Text;
                if (operation_pressed)
                    textBox_Result.Text = "0,";
            }
            else
                textBox_Result.Text = textBox_Result.Text + button.Text;
            operation_pressed = false;
        }

        private void operator_click(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            if (!operation_pressed)
            {
                if (resultValue != 0)
                {
                    equal.PerformClick();
                    operationPerformed = button.Text;                 
                }
                else
                {                    
                    resultValue = double.Parse(textBox_Result.Text);
                    operationPerformed = button.Text;
                }
                labelCurrentOperation.Text = resultValue + "" + operationPerformed;
                operation_pressed = true;           
            }
            else
            {
                operationPerformed = button.Text;
                labelCurrentOperation.Text = resultValue + " " + operationPerformed;
                operation_pressed = true;
            }
        }



        private void button16_Click(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            if (labelCurrentOperation.Text != "")
            {
                switch (operationPerformed)
                {
                    case "+":
                        textBox_Result.Text = (resultValue + Double.Parse(textBox_Result.Text)).ToString();
                        break;
                    case "-":
                        textBox_Result.Text = (resultValue - Double.Parse(textBox_Result.Text)).ToString();
                        break;
                    case "/":
                        textBox_Result.Text = (resultValue / Double.Parse(textBox_Result.Text)).ToString();
                        break;
                    case "*":
                        textBox_Result.Text = (resultValue * Double.Parse(textBox_Result.Text)).ToString();
                        break;
                    default:
                        break;
                }
                resultValue = Double.Parse(textBox_Result.Text);
                labelCurrentOperation.Text = "";
            } 
        }

        private void button18_Click(object sender, EventArgs e)
        {
            labelCurrentOperation.Text = "";
            textBox_Result.Text = "0";
            resultValue = 0;
        }

        private void button19_Click(object sender, EventArgs e)
        {
            string a = textBox_Result.Text;
            a = a.Substring(0, a.Length - 1);
            if (a == "")        
                a = "0";           
            textBox_Result.Text = a;         
        }   

        private void button20_Click(object sender, EventArgs e)
        {
            textBox_Result.Text = "0";
        }

        private void Caculator_KeyPress(object sender, KeyPressEventArgs e)
        {
            switch (e.KeyChar.ToString())
            {
                case "1":
                    one.PerformClick();
                    break;
                case "2":
                    two.PerformClick();
                    break;
                case "3":
                    three.PerformClick();
                    break;
                case "4":
                    four.PerformClick();
                    break;
                case "5":
                    five.PerformClick();
                    break;
                case "6":
                    six.PerformClick();
                    break;
                case "7":
                    seven.PerformClick();
                    break;
                case "8":
                    eight.PerformClick();
                    break;
                case "9":
                    nine.PerformClick();
                    break;
                case "0":
                    zero.PerformClick();
                    break;
                case "=":
                    equal.PerformClick();
                    break;
                case "ENTER":
                    equal.PerformClick();
                    break;
                case "/":
                    div.PerformClick();
                    break;
                case "*":
                    mult.PerformClick();
                    break;
                case "-":
                    sub.PerformClick();
                    break;
                case "+":
                    add.PerformClick();
                    break;
                case ",":
                    dec.PerformClick();
                    break;
                default:
                    break;
            }
        }

        private void button17_Click(object sender, EventArgs e)
        {
            /* if (!textBox_Result.Text.Contains("-"))
             {
                 textBox_Result.Text="-"+textBox_Result.Text;
             }
             else
                 textBox_Result.Text = textBox_Result.Text.Trim('-');
             */
            double x = double.Parse(textBox_Result.Text) * -1;
            textBox_Result.Text = Convert.ToString(x);
        }

        private void button22_Click(object sender, EventArgs e)
        {
            if (operation_pressed == false)
            {
                double x = double.Parse(textBox_Result.Text);
                textBox_Result.Text = Convert.ToString(Math.Sqrt(x));
            
                if (x < 0)
                    textBox_Result.Text = "Invalid Input";
                labelCurrentOperation.Text = "sqrt" + "(" + x + ")";
            }          
        }

        private void button21_Click(object sender, EventArgs e)
        {
            double x = Convert.ToDouble(textBox_Result.Text);
            double y = Math.Pow(x, 2);
            textBox_Result.Text = y.ToString();
            labelCurrentOperation.Text = x + "²";
        }
    }
}
