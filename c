[33mcommit 7a7aa281561ac4d493e842ba15bc8d2711316a06[m[33m ([m[1;36mHEAD -> [m[1;32mNarinder[m[33m, [m[1;31morigin/Narinder[m[33m)[m
Author: narinders163 <narinders163@gmail.com>
Date:   Fri May 12 20:22:34 2023 -0400

    From git bash

 target/CucumberBDD-0.0.1-SNAPSHOT.jar              | Bin [31m0[m -> [32m10527[m bytes
 target/classes/.cucumber/cucumber.glue.tmp         | Bin [31m0[m -> [32m4988[m bytes
 .../classes/.cucumber/cucumber.stepDefinitions.tmp | Bin [31m0[m -> [32m2236[m bytes
 target/classes/META-INF/MANIFEST.MF                |   5 [32m+[m
 .../CucumberBDD/pom.properties                     |   7 [32m++[m
 .../com.narinderpal.singh/CucumberBDD/pom.xml      | 124 [32m+++++++++++++++++++++[m
 .../failsafe-reports/HubSpot login feature #1.txt  |   4 [32m+[m
 .../failsafe-reports/HubSpot login feature #2.txt  |   4 [32m+[m
 .../TEST-HubSpot login feature #1.xml              |  78 [32m+++++++++++++[m
 .../TEST-HubSpot login feature #2.xml              | 100 [32m+++++++++++++++++[m
 target/failsafe-reports/failsafe-summary.xml       |   8 [32m++[m
 target/maven-archiver/pom.properties               |   5 [32m+[m
 .../default-testCompile/createdFiles.lst           |   0
 .../testCompile/default-testCompile/inputFiles.lst |   3 [32m+[m
 .../test-classes/apphooks/ApplicationHooks.class   | Bin [31m2254[m -> [32m2254[m bytes
 target/test-classes/config/config.properties       |   1 [32m+[m
 target/test-classes/cucumber.properties            |   1 [32m+[m
 target/test-classes/extent.properties              |  12 [32m++[m
 target/test-classes/features/loginpage.feature     |  11 [32m++[m
 target/test-classes/features/loginpage2.feature    |  11 [32m++[m
 target/test-classes/runners/MyTestRunner.class     | Bin [31m628[m -> [32m628[m bytes
 target/test-classes/spart-config.xml               |  41 [32m+++++++[m
 .../test-classes/stepdefinitions/LoginSteps.class  | Bin [31m1967[m -> [32m1963[m bytes
 23 files changed, 415 insertions(+)

[33mcommit 61b51f72f523fc65c5e99c10bfb5c33ab3519087[m
Author: narinder <narinders163@gmail.com>
Date:   Fri May 12 19:38:31 2023 -0400

    Changes

 pom.xml                                            |   7 [32m++++[m
 target/classes/.cucumber/cucumber.glue.tmp         | Bin [31m5154[m -> [32m0[m bytes
 .../classes/.cucumber/cucumber.stepDefinitions.tmp | Bin [31m2236[m -> [32m0[m bytes
 .../singh/driver/DriverInitializer.class           | Bin [31m0[m -> [32m1770[m bytes
 .../com/narinderpal/singh/pages/LoginPage.class    | Bin [31m0[m -> [32m2606[m bytes
 .../com/narinderpal/singh/utils/ConfigReader.class | Bin [31m0[m -> [32m997[m bytes
 .../com/narinderpal/singh/utils/Constants.class    | Bin [31m0[m -> [32m308[m bytes
 .../com/narinderpal/singh/utils/ElementsUtil.class | Bin [31m0[m -> [32m317[m bytes
 .../test-classes/apphooks/ApplicationHooks.class   | Bin [31m0[m -> [32m2254[m bytes
 target/test-classes/config/config.properties       |   1 [31m-[m
 target/test-classes/cucumber.properties            |   1 [31m-[m
 target/test-classes/extent.properties              |  12 [31m------[m
 target/test-classes/features/loginpage.feature     |  11 [31m------[m
 target/test-classes/features/loginpage2.feature    |  11 [31m------[m
 target/test-classes/runners/MyTestRunner.class     | Bin [31m0[m -> [32m628[m bytes
 target/test-classes/spart-config.xml               |  41 [31m---------------------[m
 .../test-classes/stepdefinitions/LoginSteps.class  | Bin [31m0[m -> [32m1967[m bytes
 17 files changed, 7 insertions(+), 77 deletions(-)

[33mcommit 6301ae4204eede379ba80961f49ec06d3c7b513d[m
Author: narinder <narinders163@gmail.com>
Date:   Thu May 11 22:05:21 2023 -0400

    First commit

 .classpath                                         |  34 [32m++[m
 .project                                           |  34 [32m++[m
 .settings/org.eclipse.core.resources.prefs         |   5 [32m+[m
 .settings/org.eclipse.jdt.core.prefs               |   8 [32m+[m
 .settings/org.eclipse.m2e.core.prefs               |   4 [32m+[m
 pom.xml                                            | 117 [32m+++++++[m
 .../singh/driver/DriverInitializer.java            |  40 [32m+++[m
 .../com/narinderpal/singh/pages/LoginPage.java     |  38 [32m+++[m
 .../com/narinderpal/singh/utils/ConfigReader.java  |  25 [32m++[m
 .../com/narinderpal/singh/utils/Constants.java     |   5 [32m+[m
 .../com/narinderpal/singh/utils/ElementsUtil.java  |   5 [32m+[m
 src/test/java/apphooks/ApplicationHooks.java       |  51 [32m+++[m
 src/test/java/runners/MyTestRunner.java            |  15 [32m+[m
 src/test/java/stepdefinitions/LoginSteps.java      |  50 [32m+++[m
 src/test/resources/config/config.properties        |   1 [32m+[m
 src/test/resources/cucumber.properties             |   1 [32m+[m
 src/test/resources/extent.properties               |  12 [32m+[m
 src/test/resources/features/loginpage.feature      |  11 [32m+[m
 src/test/resources/features/loginpage2.feature     |  11 [32m+[m
 src/test/resources/spart-config.xml                |  41 [32m+++[m
 target/classes/.cucumber/cucumber.glue.tmp         | Bin [31m0[m -> [32m5154[m bytes
 .../classes/.cucumber/cucumber.stepDefinitions.tmp | Bin [31m0[m -> [32m2236[m bytes
 .../compile/default-compile/inputFiles.lst         |   5 [32m+[m
 target/test-classes/config/config.properties       |   1 [32m+[m
 target/test-classes/cucumber.properties            |   1 [32m+[m
 target/test-classes/extent.properties              |  12 [32m+[m
 target/test-classes/features/loginpage.feature     |  11 [32m+[m
 target/test-classes/features/loginpage2.feature    |  11 [32m+[m
 target/test-classes/spart-config.xml               |  41 [32m+++[m
 test-output/SparkReport/Spark.html                 | 371 [32m+++++++++++++++++++++[m
 30 files changed, 961 insertions(+)
