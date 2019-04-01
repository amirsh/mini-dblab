val scala_version = "2.12.8"

scalaVersion := scala_version

resolvers += Resolver.sonatypeRepo("snapshots")

libraryDependencies += "org.scala-lang" %  "scala-reflect" % scala_version

enablePlugins(JmhPlugin)
