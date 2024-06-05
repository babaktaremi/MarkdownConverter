using ColorCode.Styling;
using Markdig;

namespace Blazor.MarkdownConverter.Services;

public class MarkDownService
{
    private readonly MarkdownPipeline _markdownPipeline = new MarkdownPipelineBuilder()
        .UseAdvancedExtensions()
        .UseAlertBlocks()
        .UseBootstrap()
        .UseSyntaxHighlighting(StyleDictionary.DefaultLight,true)
        .Build();

    public string ConvertToHtml(string markdown)=>
        Markdown.ToHtml(markdown,_markdownPipeline);
    
}