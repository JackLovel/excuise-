#pragma checksum "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "cbb4655dfa51f5912d9ccd9721f15ecba3743906"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Home_RsvpForm), @"mvc.1.0.view", @"/Views/Home/RsvpForm.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.Razor.Compilation.RazorViewAttribute(@"/Views/Home/RsvpForm.cshtml", typeof(AspNetCore.Views_Home_RsvpForm))]
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
#line 1 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/_ViewImports.cshtml"
using ch2;

#line default
#line hidden
#line 2 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/_ViewImports.cshtml"
using ch2.Models;

#line default
#line hidden
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"cbb4655dfa51f5912d9ccd9721f15ecba3743906", @"/Views/Home/RsvpForm.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"5e3ef4f6e21c555b4259b2c769054a9d90b5eca4", @"/Views/_ViewImports.cshtml")]
    public class Views_Home_RsvpForm : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<ch2.Models.GuestResponse>
    {
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_0 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("rel", new global::Microsoft.AspNetCore.Html.HtmlString("stylesheet"), global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_1 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("type", new global::Microsoft.AspNetCore.Html.HtmlString("text/css"), global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_2 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("href", new global::Microsoft.AspNetCore.Html.HtmlString("~/lib/bootstrap/dist/css/bootstrap.css"), global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_3 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("href", new global::Microsoft.AspNetCore.Html.HtmlString("~/css/Styles.css"), global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
        #line hidden
        #pragma warning disable 0169
        private string __tagHelperStringValueBuffer;
        #pragma warning restore 0169
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperExecutionContext __tagHelperExecutionContext;
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperRunner __tagHelperRunner = new global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperRunner();
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperScopeManager __backed__tagHelperScopeManager = null;
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperScopeManager __tagHelperScopeManager
        {
            get
            {
                if (__backed__tagHelperScopeManager == null)
                {
                    __backed__tagHelperScopeManager = new global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperScopeManager(StartTagHelperWritingScope, EndTagHelperWritingScope);
                }
                return __backed__tagHelperScopeManager;
            }
        }
        private global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.HeadTagHelper __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_HeadTagHelper;
        private global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.UrlResolutionTagHelper __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper;
        private global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.BodyTagHelper __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_BodyTagHelper;
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
            BeginContext(32, 1, true);
            WriteLiteral("\n");
            EndContext();
#line 3 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
  
    Layout = null;

#line default
#line hidden
            BeginContext(57, 28, true);
            WriteLiteral("\n<!DOCTYPE HTML>\n<html>\n    ");
            EndContext();
            BeginContext(85, 279, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("head", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "cbb4655dfa51f5912d9ccd9721f15ecba37439065137", async() => {
                BeginContext(91, 70, true);
                WriteLiteral("\n        <meta name=\"viewport\" content=\"width=device-width\"/>\n        ");
                EndContext();
                BeginContext(161, 86, false);
                __tagHelperExecutionContext = __tagHelperScopeManager.Begin("link", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.SelfClosing, "cbb4655dfa51f5912d9ccd9721f15ecba37439065585", async() => {
                }
                );
                __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.UrlResolutionTagHelper>();
                __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper);
                __tagHelperExecutionContext.AddHtmlAttribute(__tagHelperAttribute_0);
                __tagHelperExecutionContext.AddHtmlAttribute(__tagHelperAttribute_1);
                __tagHelperExecutionContext.AddHtmlAttribute(__tagHelperAttribute_2);
                await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
                if (!__tagHelperExecutionContext.Output.IsContentModified)
                {
                    await __tagHelperExecutionContext.SetOutputContentAsync();
                }
                Write(__tagHelperExecutionContext.Output);
                __tagHelperExecutionContext = __tagHelperScopeManager.End();
                EndContext();
                BeginContext(247, 9, true);
                WriteLiteral("\n        ");
                EndContext();
                BeginContext(256, 64, false);
                __tagHelperExecutionContext = __tagHelperScopeManager.Begin("link", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.SelfClosing, "cbb4655dfa51f5912d9ccd9721f15ecba37439066986", async() => {
                }
                );
                __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.UrlResolutionTagHelper>();
                __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_UrlResolutionTagHelper);
                __tagHelperExecutionContext.AddHtmlAttribute(__tagHelperAttribute_0);
                __tagHelperExecutionContext.AddHtmlAttribute(__tagHelperAttribute_1);
                __tagHelperExecutionContext.AddHtmlAttribute(__tagHelperAttribute_3);
                await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
                if (!__tagHelperExecutionContext.Output.IsContentModified)
                {
                    await __tagHelperExecutionContext.SetOutputContentAsync();
                }
                Write(__tagHelperExecutionContext.Output);
                __tagHelperExecutionContext = __tagHelperScopeManager.End();
                EndContext();
                BeginContext(320, 37, true);
                WriteLiteral("\n        <title>RsvpForm</title>\n    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_HeadTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.HeadTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_HeadTagHelper);
            await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
            if (!__tagHelperExecutionContext.Output.IsContentModified)
            {
                await __tagHelperExecutionContext.SetOutputContentAsync();
            }
            Write(__tagHelperExecutionContext.Output);
            __tagHelperExecutionContext = __tagHelperScopeManager.End();
            EndContext();
            BeginContext(364, 5, true);
            WriteLiteral("\n    ");
            EndContext();
            BeginContext(369, 1695, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("body", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "cbb4655dfa51f5912d9ccd9721f15ecba37439069205", async() => {
                BeginContext(375, 181, true);
                WriteLiteral("\n        <div class=\"panel panel-success\">\n            <div class=\"panel-heading text-center\">\n                <h4>RSVP</h4>\n            </div>\n            <div class=\"panel-body\">\n");
                EndContext();
#line 21 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
                 using (Html.BeginForm())
		        {

#line default
#line hidden
                BeginContext(598, 28, true);
                WriteLiteral("\t\t            <!--提示错误信息-->\n");
                EndContext();
                BeginContext(641, 24, false);
#line 24 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
               Write(Html.ValidationSummary());

#line default
#line hidden
                EndContext();
                BeginContext(681, 119, true);
                WriteLiteral("                    <div class=\"form-group\">\n                        <label>Your name:</label>\n                        ");
                EndContext();
                BeginContext(801, 59, false);
#line 28 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
                   Write(Html.TextBoxFor(x => x.Name, new {@class = "form-control"}));

#line default
#line hidden
                EndContext();
                BeginContext(860, 149, true);
                WriteLiteral("\n                    </div>\n                     <div class=\"form-group\">\n                        <label>Your email:</label>\n                        ");
                EndContext();
                BeginContext(1010, 60, false);
#line 32 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
                   Write(Html.TextBoxFor(x => x.Email, new {@class = "form-control"}));

#line default
#line hidden
                EndContext();
                BeginContext(1070, 148, true);
                WriteLiteral("\n                    </div>\n                    <div class=\"form-group\">\n                        <label>Your phone:</label>\n                        ");
                EndContext();
                BeginContext(1219, 60, false);
#line 36 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
                   Write(Html.TextBoxFor(x => x.Phone, new {@class = "form-control"}));

#line default
#line hidden
                EndContext();
                BeginContext(1279, 168, true);
                WriteLiteral("\n                    </div>\n                    <div class=\"form-group\">\n                        <label>Will you attend?</label>\n                        \t\t\t            ");
                EndContext();
                BeginContext(1448, 382, false);
#line 40 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
                                           Write(Html.DropDownListFor(x => x.WillAttend, new[] {
			                new SelectListItem () {
			                    Text = "Yes, I'll be there", Value = bool.TrueString
			                },
			                new SelectListItem () {
			                    Text = "No, I can't come", Value = bool.FalseString
			                }, }, "Choose an option", new {@class = "form-control"}));

#line default
#line hidden
                EndContext();
                BeginContext(1830, 177, true);
                WriteLiteral("\n                    </div>\n\t\t\t\t\t<div class=\"text-center\">\n                        <input class=\"btn btn-success\" type=\"submit\" value=\"Submit RSVP\"/>\n                    </div>\n");
                EndContext();
#line 51 "/home/w/Documents/CodePro/excuise-/PRO ASP.NET MVC5/ch2/Views/Home/RsvpForm.cshtml"
		        }

#line default
#line hidden
                BeginContext(2019, 38, true);
                WriteLiteral("            </div>\n        </div>\n    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_Razor_TagHelpers_BodyTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.Razor.TagHelpers.BodyTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_Razor_TagHelpers_BodyTagHelper);
            await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
            if (!__tagHelperExecutionContext.Output.IsContentModified)
            {
                await __tagHelperExecutionContext.SetOutputContentAsync();
            }
            Write(__tagHelperExecutionContext.Output);
            __tagHelperExecutionContext = __tagHelperScopeManager.End();
            EndContext();
            BeginContext(2064, 9, true);
            WriteLiteral("\n</html>\n");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<ch2.Models.GuestResponse> Html { get; private set; }
    }
}
#pragma warning restore 1591