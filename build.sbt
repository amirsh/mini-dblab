val scala_version = "2.12.8"

scalaVersion := scala_version

resolvers += Resolver.sonatypeRepo("snapshots")

libraryDependencies += "org.scala-lang" %  "scala-reflect" % scala_version

libraryDependencies += "ch.epfl.lamp" %% "scala-records" % "0.5-SNAPSHOT"

enablePlugins(JmhPlugin)
