#pragma checksum "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "966506178c8a2173732d092da2f891b28518ffbd"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Students_Details), @"mvc.1.0.view", @"/Views/Students/Details.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.Razor.Compilation.RazorViewAttribute(@"/Views/Students/Details.cshtml", typeof(AspNetCore.Views_Students_Details))]
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
#line 1 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/_ViewImports.cshtml"
using ContosoUniversity2;

#line default
#line hidden
#line 2 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/_ViewImports.cshtml"
using ContosoUniversity2.Models;

#line default
#line hidden
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"966506178c8a2173732d092da2f891b28518ffbd", @"/Views/Students/Details.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"495b27c84e84a98b80d0bc88d2b7d35c78b81807", @"/Views/_ViewImports.cshtml")]
    public class Views_Students_Details : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<ContosoUniversity2.Models.Student>
    {
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_0 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("asp-action", "Edit", global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_1 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("asp-action", "Index", global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
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
        private global::Microsoft.AspNetCore.Mvc.TagHelpers.AnchorTagHelper __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper;
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
            BeginContext(42, 2, true);
            WriteLiteral("\r\n");
            EndContext();
#line 3 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
  
    ViewData["Title"] = "Details";

#line default
#line hidden
            BeginContext(87, 182, true);
            WriteLiteral("\r\n<h1>Details</h1>\r\n\r\n<div>\r\n    <h4>Student</h4>\r\n    <hr />\r\n    <dl class=\"row\">\r\n        <!-- 每个字段都使用　DisplayNameFor 和　ＤisplayFor -->\r\n        <dt class=\"col-sm-2\">\r\n            ");
            EndContext();
            BeginContext(270, 44, false);
#line 15 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayNameFor(model => model.LastName));

#line default
#line hidden
            EndContext();
            BeginContext(314, 61, true);
            WriteLiteral("\r\n        </dt>\r\n        <dd class=\"col-sm-10\">\r\n            ");
            EndContext();
            BeginContext(376, 40, false);
#line 18 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayFor(model => model.LastName));

#line default
#line hidden
            EndContext();
            BeginContext(416, 60, true);
            WriteLiteral("\r\n        </dd>\r\n        <dt class=\"col-sm-2\">\r\n            ");
            EndContext();
            BeginContext(477, 48, false);
#line 21 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayNameFor(model => model.FirstMidName));

#line default
#line hidden
            EndContext();
            BeginContext(525, 61, true);
            WriteLiteral("\r\n        </dt>\r\n        <dd class=\"col-sm-10\">\r\n            ");
            EndContext();
            BeginContext(587, 44, false);
#line 24 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayFor(model => model.FirstMidName));

#line default
#line hidden
            EndContext();
            BeginContext(631, 60, true);
            WriteLiteral("\r\n        </dd>\r\n        <dt class=\"col-sm-2\">\r\n            ");
            EndContext();
            BeginContext(692, 50, false);
#line 27 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayNameFor(model => model.EnrollmentDate));

#line default
#line hidden
            EndContext();
            BeginContext(742, 61, true);
            WriteLiteral("\r\n        </dt>\r\n        <dd class=\"col-sm-10\">\r\n            ");
            EndContext();
            BeginContext(804, 46, false);
#line 30 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayFor(model => model.EnrollmentDate));

#line default
#line hidden
            EndContext();
            BeginContext(850, 60, true);
            WriteLiteral("\r\n        </dd>\r\n        <dt class=\"col-sm-2\">\r\n            ");
            EndContext();
            BeginContext(911, 47, false);
#line 33 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
       Write(Html.DisplayNameFor(model => model.Enrollments));

#line default
#line hidden
            EndContext();
            BeginContext(958, 208, true);
            WriteLiteral("\r\n        </dt>\r\n        <dd class=\"col-sm-10\">\r\n            <table class=\"table\">\r\n                <tr>\r\n                    <th>Course Title</th>\r\n                    <th>Grade</th>\r\n                </tr>\r\n");
            EndContext();
#line 41 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
                 foreach (var item in Model.Enrollments)
                {

#line default
#line hidden
            BeginContext(1243, 84, true);
            WriteLiteral("                    <tr>\r\n                        <td>\r\n                            ");
            EndContext();
            BeginContext(1328, 47, false);
#line 45 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
                       Write(Html.DisplayFor(modelItem => item.Course.Title));

#line default
#line hidden
            EndContext();
            BeginContext(1375, 91, true);
            WriteLiteral("\r\n                        </td>\r\n                        <td>\r\n                            ");
            EndContext();
            BeginContext(1467, 40, false);
#line 48 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
                       Write(Html.DisplayFor(modelItem => item.Grade));

#line default
#line hidden
            EndContext();
            BeginContext(1507, 60, true);
            WriteLiteral("\r\n                        </td>\r\n                    </tr>\r\n");
            EndContext();
#line 51 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
                }

#line default
#line hidden
            BeginContext(1586, 67, true);
            WriteLiteral("            </table>\r\n        </dd>\r\n    </dl>\r\n</div>\r\n<div>\r\n    ");
            EndContext();
            BeginContext(1653, 54, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("a", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "966506178c8a2173732d092da2f891b28518ffbd9226", async() => {
                BeginContext(1699, 4, true);
                WriteLiteral("Edit");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.AnchorTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper.Action = (string)__tagHelperAttribute_0.Value;
            __tagHelperExecutionContext.AddTagHelperAttribute(__tagHelperAttribute_0);
            if (__Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper.RouteValues == null)
            {
                throw new InvalidOperationException(InvalidTagHelperIndexerAssignment("asp-route-id", "Microsoft.AspNetCore.Mvc.TagHelpers.AnchorTagHelper", "RouteValues"));
            }
            BeginWriteTagHelperAttribute();
#line 57 "/home/w/Documents/CodePro/excuise-/office_csharp_code/ContosoUniversity2/Views/Students/Details.cshtml"
                           WriteLiteral(Model.ID);

#line default
#line hidden
            __tagHelperStringValueBuffer = EndWriteTagHelperAttribute();
            __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper.RouteValues["id"] = __tagHelperStringValueBuffer;
            __tagHelperExecutionContext.AddTagHelperAttribute("asp-route-id", __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper.RouteValues["id"], global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
            await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
            if (!__tagHelperExecutionContext.Output.IsContentModified)
            {
                await __tagHelperExecutionContext.SetOutputContentAsync();
            }
            Write(__tagHelperExecutionContext.Output);
            __tagHelperExecutionContext = __tagHelperScopeManager.End();
            EndContext();
            BeginContext(1707, 8, true);
            WriteLiteral(" |\r\n    ");
            EndContext();
            BeginContext(1715, 38, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("a", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "966506178c8a2173732d092da2f891b28518ffbd11535", async() => {
                BeginContext(1737, 12, true);
                WriteLiteral("Back to List");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.AnchorTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_AnchorTagHelper.Action = (string)__tagHelperAttribute_1.Value;
            __tagHelperExecutionContext.AddTagHelperAttribute(__tagHelperAttribute_1);
            await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
            if (!__tagHelperExecutionContext.Output.IsContentModified)
            {
                await __tagHelperExecutionContext.SetOutputContentAsync();
            }
            Write(__tagHelperExecutionContext.Output);
            __tagHelperExecutionContext = __tagHelperScopeManager.End();
            EndContext();
            BeginContext(1753, 12, true);
            WriteLiteral("\r\n</div>\r\n\r\n");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<ContosoUniversity2.Models.Student> Html { get; private set; }
    }
}
#pragma warning restore 1591
