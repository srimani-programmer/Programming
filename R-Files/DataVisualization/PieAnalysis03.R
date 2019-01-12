classNames = c("L.K.G","U.K.G",'Ist',"2nd",'3rd','4th','5th','6th'
                    ,'7th','8th','9th','10th')

classStrength = c(240,240,220,180,160,145,155,195,205,124,149,185)

pie(classStrength,classNames,col = rainbow(length(classNames)))