cat include/QtGui/QtGui | grep -v -e 'qs60' -e 'qvfbhdr' -e 'qwsembedwidget' > include/QtGui/QtGui.new
mv include/QtGui/QtGui.new include/QtGui/QtGui
