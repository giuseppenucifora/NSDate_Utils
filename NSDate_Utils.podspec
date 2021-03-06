#
# Be sure to run `pod lib lint NSDate_Utils.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "NSDate_Utils"
  s.version          = "1.2.0"
s.summary          = "NSDate_Utils is a NSDate category that helps date managements. For example NSString to NSDate, NSDate to NSString,NSSdate comparisons"

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!  
#s.description      = <<-DESC DESC

  s.homepage         = "https://github.com/giuseppenucifora/NSDate_Utils"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Giuseppe Nucifora" => "me@giuseppenucifora.com" }
  s.source           = { :git => "https://github.com/giuseppenucifora/NSDate_Utils.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

s.ios.deployment_target = '10.0'

  s.source_files = 'Pod/Classes/**/*'

end
