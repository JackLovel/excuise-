#pragma checksum "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "1176db888102bc77f430ea65e3eb4e556ab56d03"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Home_DemoExpression), @"mvc.1.0.view", @"/Views/Home/DemoExpression.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.Razor.Compilation.RazorViewAttribute(@"/Views/Home/DemoExpression.cshtml", typeof(AspNetCore.Views_Home_DemoExpression))]
namespace AspNetCore
{
    #line hidden
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Threading.Tasks;
    using Microsoft.AspNetCore.Mvc;
    using Microsoft.AspNetCore.Mvc.Rendering;
    using Microsoft.AspNetCore.Mvc.ViewFeatures;
#line 1 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/_ViewImports.cshtml"
using ch5;

#line default
#line hidden
#line 2 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/_ViewImports.cshtml"
using ch5.Models;

#line default
#line hidden
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"1176db888102bc77f430ea65e3eb4e556ab56d03", @"/Views/Home/DemoExpression.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"0bce43ec407bb609bd9beba0d91b1cc06ccf085f", @"/Views/_ViewImports.cshtml")]
    public class Views_Home_DemoExpression : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<ch5.Models.Product>
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
            BeginContext(26, 1, true);
            WriteLiteral("\n");
            EndContext();
#line 3 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
  
    ViewBag.Title = "DemoExpression";
    Layout = "~/Views/_BasicLayout.cshtml";

#line default
#line hidden
            BeginContext(114, 185, true);
            WriteLiteral("\n<table>\n    <thead>\n        <tr>\n            <th>Property</th>\n            <th>Value</th>\n        </tr>\n    </thead>\n    <tbody>\n        <tr>\n            <td>Name</td>\n            <td>");
            EndContext();
            BeginContext(300, 10, false);
#line 18 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
           Write(Model.Name);

#line default
#line hidden
            EndContext();
            BeginContext(310, 76, true);
            WriteLiteral("</td>\n        </tr>\n        <tr>\n            <td>Price</td>\n            <td>");
            EndContext();
            BeginContext(387, 11, false);
#line 22 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
           Write(Model.Price);

#line default
#line hidden
            EndContext();
            BeginContext(398, 82, true);
            WriteLiteral("</td>\n        </tr>\n        <tr>\n            <td>Stock Level</td>\n            <td>");
            EndContext();
            BeginContext(481, 20, false);
#line 26 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
           Write(ViewBag.ProductCount);

#line default
#line hidden
            EndContext();
            BeginContext(501, 23, true);
            WriteLiteral("</td>\n            <td>\n");
            EndContext();
#line 28 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                 switch ((int)ViewBag.ProductCount)
                {
                    case 0:

#line default
#line hidden
            BeginContext(622, 24, true);
            WriteLiteral("                        ");
            EndContext();
            BeginContext(648, 12, true);
            WriteLiteral("Out of Sock\n");
            EndContext();
#line 32 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                        break;
                    case 1:

#line default
#line hidden
            BeginContext(719, 38, true);
            WriteLiteral("                        <b>Low Stock (");
            EndContext();
            BeginContext(758, 20, false);
#line 34 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                                 Write(ViewBag.ProductCount);

#line default
#line hidden
            EndContext();
            BeginContext(778, 6, true);
            WriteLiteral(")</b>\n");
            EndContext();
#line 35 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                        break;
                    default:
                        

#line default
#line hidden
            BeginContext(869, 20, false);
#line 37 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                   Write(ViewBag.ProductCount);

#line default
#line hidden
            EndContext();
#line 37 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                                             
                        break;
                }

#line default
#line hidden
            BeginContext(939, 35, true);
            WriteLiteral("            </td>\n            <td>\n");
            EndContext();
#line 42 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                 if (ViewBag.ProductCount == 0) {

#line default
#line hidden
            BeginContext(1024, 20, true);
            WriteLiteral("                    ");
            EndContext();
            BeginContext(1046, 15, true);
            WriteLiteral(" Out of Stock \n");
            EndContext();
#line 44 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                } else if (ViewBag.ProductCount == 1) {

#line default
#line hidden
            BeginContext(1117, 34, true);
            WriteLiteral("                    <b>Low Stock (");
            EndContext();
            BeginContext(1152, 20, false);
#line 45 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                             Write(ViewBag.ProductCount);

#line default
#line hidden
            EndContext();
            BeginContext(1172, 6, true);
            WriteLiteral(")</b>\n");
            EndContext();
#line 46 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                } else {
                    

#line default
#line hidden
            BeginContext(1224, 20, false);
#line 47 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
               Write(ViewBag.ProductCount);

#line default
#line hidden
            EndContext();
#line 47 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
                                         
                }

#line default
#line hidden
            BeginContext(1263, 75, true);
            WriteLiteral("            </td>\n        </tr>\n    </tbody>\n</table>\n\n<div data-discount=\"");
            EndContext();
            BeginContext(1339, 21, false);
#line 54 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
               Write(ViewBag.ApplyDiscount);

#line default
#line hidden
            EndContext();
            BeginContext(1360, 1, true);
            WriteLiteral("\"");
            EndContext();
            BeginWriteAttribute("dataexpress", " dataexpress=\"", 1361, "\"", 1395, 1);
#line 54 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
WriteAttributeValue("", 1375, ViewBag.ExpressShip, 1375, 20, false);

#line default
#line hidden
            EndWriteAttribute();
            BeginContext(1396, 21, true);
            WriteLiteral("\n     data-supplier=\"");
            EndContext();
            BeginContext(1418, 16, false);
#line 55 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
               Write(ViewBag.Supplier);

#line default
#line hidden
            EndContext();
            BeginContext(1434, 96, true);
            WriteLiteral("\">\n     The containing element has data attributes\n     </div>\n\nDiscount: <input type=\"checkbox\"");
            EndContext();
            BeginWriteAttribute("checked", " checked=\"", 1530, "\"", 1562, 1);
#line 59 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
WriteAttributeValue("", 1540, ViewBag.ApplyDiscount, 1540, 22, false);

#line default
#line hidden
            EndWriteAttribute();
            BeginContext(1563, 34, true);
            WriteLiteral("/>\nExpress: <input type=\"checkbox\"");
            EndContext();
            BeginWriteAttribute("checked", " checked=\"", 1597, "\"", 1627, 1);
#line 60 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
WriteAttributeValue("", 1607, ViewBag.ExpressShip, 1607, 20, false);

#line default
#line hidden
            EndWriteAttribute();
            BeginContext(1628, 35, true);
            WriteLiteral("/>\nSupplier: <input type=\"checkbox\"");
            EndContext();
            BeginWriteAttribute("checked", " checked=\"", 1663, "\"", 1690, 1);
#line 61 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch5/Views/Home/DemoExpression.cshtml"
WriteAttributeValue("", 1673, ViewBag.Supplier, 1673, 17, false);

#line default
#line hidden
            EndWriteAttribute();
            BeginContext(1691, 3, true);
            WriteLiteral("/>\n");
            EndContext();
        }
        #pragma warning restore 1998
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.IModelExpressionProvider ModelExpressionProvider { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IUrlHelper Url { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IViewComponentHelper Component { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IJsonHelper Json { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<ch5.Models.Product> Html { get; private set; }
    }
}
#pragma warning restore 1591