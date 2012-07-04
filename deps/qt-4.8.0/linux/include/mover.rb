require 'rake'

files = FileList.new('./**/*.h')
files.each do |file|
  dirname = File.dirname(file)
  match = File.read(file).match(/#include \"(.+)\"/)
  realfile = match && match[1]
  if realfile
    actual = File.join(dirname, realfile)
    if File.exist?(actual) && File.exist?(file)
      system "cp #{actual} #{file}"
    elsif File.exist?(actual)
      puts "file does not exist 1: #{file}"
    elsif File.exist?(file)
      puts "file does not exist 2: #{actual}"
    end
  else
    puts "error for #{file}"
  end
end
