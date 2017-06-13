
library(xtensorExamples)

all.equal(ex1(),                        			# returns simple array
          array(c(1,2,2,2,3,22,4,2),				# control
                dim=c(2,4))
          )

all.equal(ex2(verbose=FALSE), array(c(0, 332211, 0, 0, 0, 0), dim=c(1,2,3)))

all.equal(ex3(1:3), array(c(42, 2, 3)))

all.equal(ex3(array(1:6, 1:3)), array(c(42, 2:6), dim=1:3))

